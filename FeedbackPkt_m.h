//
// Generated file, do not edit! Created by opp_msgtool 6.0 from FeedbackPkt.msg.
//

#ifndef __FEEDBACKPKT_M_H
#define __FEEDBACKPKT_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

class FeedbackPkt;
/**
 * Class generated from <tt>FeedbackPkt.msg:1</tt> by opp_msgtool.
 * <pre>
 * packet FeedbackPkt
 * {
 *     bool fullBufferQueue = false;
 *     bool fullBufferR = false;
 * }
 * </pre>
 */
class FeedbackPkt : public ::omnetpp::cPacket
{
  protected:
    bool fullBufferQueue = false;
    bool fullBufferR = false;

  private:
    void copy(const FeedbackPkt& other);

  protected:
    bool operator==(const FeedbackPkt&) = delete;

  public:
    FeedbackPkt(const char *name=nullptr, short kind=0);
    FeedbackPkt(const FeedbackPkt& other);
    virtual ~FeedbackPkt();
    FeedbackPkt& operator=(const FeedbackPkt& other);
    virtual FeedbackPkt *dup() const override {return new FeedbackPkt(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual bool getFullBufferQueue() const;
    virtual void setFullBufferQueue(bool fullBufferQueue);

    virtual bool getFullBufferR() const;
    virtual void setFullBufferR(bool fullBufferR);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const FeedbackPkt& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, FeedbackPkt& obj) {obj.parsimUnpack(b);}


namespace omnetpp {

template<> inline FeedbackPkt *fromAnyPtr(any_ptr ptr) { return check_and_cast<FeedbackPkt*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __FEEDBACKPKT_M_H

