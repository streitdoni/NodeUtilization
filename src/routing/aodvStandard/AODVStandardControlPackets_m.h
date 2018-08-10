//
// Generated file, do not edit! Created by nedtool 5.4 from src/routing/aodvStandard/AODVStandardControlPackets.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __INET_AODVSTANDARDCONTROLPACKETS_M_H
#define __INET_AODVSTANDARDCONTROLPACKETS_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/networklayer/common/L3Address.h"
// }}


namespace inet {

/**
 * Struct generated from src/routing/aodvStandard/AODVStandardControlPackets.msg:31 by nedtool.
 */
struct StandardUnreachableNode
{
    StandardUnreachableNode();
    L3Address addr;
    unsigned int seqNum;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const StandardUnreachableNode& a);
void __doUnpacking(omnetpp::cCommBuffer *b, StandardUnreachableNode& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const StandardUnreachableNode& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, StandardUnreachableNode& obj) { __doUnpacking(b, obj); }

/**
 * Enum generated from <tt>src/routing/aodvStandard/AODVStandardControlPackets.msg:37</tt> by nedtool.
 * <pre>
 * enum AODVStandardControlPacketType
 * {
 *     RREQ = 1;
 *     RREP = 2;
 *     RERR = 3;
 *     RREPACK = 4;
 * }
 * </pre>
 */
enum AODVStandardControlPacketType {
    RREQ = 1,
    RREP = 2,
    RERR = 3,
    RREPACK = 4
};

/**
 * Class generated from <tt>src/routing/aodvStandard/AODVStandardControlPackets.msg:48</tt> by nedtool.
 * <pre>
 * //
 * // Base packet for AODV Control Packets
 * //
 * packet AODVStandardControlPacket
 * {
 *     unsigned int packetType;
 * }
 * </pre>
 */
class AODVStandardControlPacket : public ::omnetpp::cPacket
{
  protected:
    unsigned int packetType;

  private:
    void copy(const AODVStandardControlPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVStandardControlPacket&);

  public:
    AODVStandardControlPacket(const char *name=nullptr, short kind=0);
    AODVStandardControlPacket(const AODVStandardControlPacket& other);
    virtual ~AODVStandardControlPacket();
    AODVStandardControlPacket& operator=(const AODVStandardControlPacket& other);
    virtual AODVStandardControlPacket *dup() const override {return new AODVStandardControlPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AODVStandardControlPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AODVStandardControlPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>src/routing/aodvStandard/AODVStandardControlPackets.msg:56</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Request
 * //
 * class AODVStandardRREQ extends AODVStandardControlPacket
 * {
 *     packetType = RREQ;
 *     bool joinFlag;
 *     bool repairFlag;
 *     bool gratuitousRREPFlag;
 *     bool destOnlyFlag;
 *     bool unknownSeqNumFlag;
 *     unsigned int hopCount;
 *     unsigned int rreqId;
 *     L3Address destAddr;
 *     unsigned int destSeqNum;
 *     L3Address originatorAddr;
 *     unsigned int originatorSeqNum;
 * }
 * </pre>
 */
class AODVStandardRREQ : public ::inet::AODVStandardControlPacket
{
  protected:
    bool joinFlag;
    bool repairFlag;
    bool gratuitousRREPFlag;
    bool destOnlyFlag;
    bool unknownSeqNumFlag;
    unsigned int hopCount;
    unsigned int rreqId;
    L3Address destAddr;
    unsigned int destSeqNum;
    L3Address originatorAddr;
    unsigned int originatorSeqNum;

  private:
    void copy(const AODVStandardRREQ& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVStandardRREQ&);

  public:
    AODVStandardRREQ(const char *name=nullptr);
    AODVStandardRREQ(const AODVStandardRREQ& other);
    virtual ~AODVStandardRREQ();
    AODVStandardRREQ& operator=(const AODVStandardRREQ& other);
    virtual AODVStandardRREQ *dup() const override {return new AODVStandardRREQ(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getJoinFlag() const;
    virtual void setJoinFlag(bool joinFlag);
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getGratuitousRREPFlag() const;
    virtual void setGratuitousRREPFlag(bool gratuitousRREPFlag);
    virtual bool getDestOnlyFlag() const;
    virtual void setDestOnlyFlag(bool destOnlyFlag);
    virtual bool getUnknownSeqNumFlag() const;
    virtual void setUnknownSeqNumFlag(bool unknownSeqNumFlag);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual unsigned int getRreqId() const;
    virtual void setRreqId(unsigned int rreqId);
    virtual L3Address& getDestAddr();
    virtual const L3Address& getDestAddr() const {return const_cast<AODVStandardRREQ*>(this)->getDestAddr();}
    virtual void setDestAddr(const L3Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual L3Address& getOriginatorAddr();
    virtual const L3Address& getOriginatorAddr() const {return const_cast<AODVStandardRREQ*>(this)->getOriginatorAddr();}
    virtual void setOriginatorAddr(const L3Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AODVStandardRREQ& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AODVStandardRREQ& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>src/routing/aodvStandard/AODVStandardControlPackets.msg:75</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Reply
 * //
 * class AODVStandardRREP extends AODVStandardControlPacket
 * {
 *     packetType = RREP;
 *     bool repairFlag;
 *     bool ackRequiredFlag;
 *     unsigned int prefixSize;
 *     unsigned int hopCount;
 *     L3Address destAddr;
 *     unsigned int destSeqNum;
 *     L3Address originatorAddr;
 *     unsigned int originatorSeqNum;
 *     simtime_t lifeTime;
 *     int totalHopsToDest;
 * }
 * </pre>
 */
class AODVStandardRREP : public ::inet::AODVStandardControlPacket
{
  protected:
    bool repairFlag;
    bool ackRequiredFlag;
    unsigned int prefixSize;
    unsigned int hopCount;
    L3Address destAddr;
    unsigned int destSeqNum;
    L3Address originatorAddr;
    unsigned int originatorSeqNum;
    ::omnetpp::simtime_t lifeTime;
    int totalHopsToDest;

  private:
    void copy(const AODVStandardRREP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVStandardRREP&);

  public:
    AODVStandardRREP(const char *name=nullptr);
    AODVStandardRREP(const AODVStandardRREP& other);
    virtual ~AODVStandardRREP();
    AODVStandardRREP& operator=(const AODVStandardRREP& other);
    virtual AODVStandardRREP *dup() const override {return new AODVStandardRREP(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getAckRequiredFlag() const;
    virtual void setAckRequiredFlag(bool ackRequiredFlag);
    virtual unsigned int getPrefixSize() const;
    virtual void setPrefixSize(unsigned int prefixSize);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual L3Address& getDestAddr();
    virtual const L3Address& getDestAddr() const {return const_cast<AODVStandardRREP*>(this)->getDestAddr();}
    virtual void setDestAddr(const L3Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual L3Address& getOriginatorAddr();
    virtual const L3Address& getOriginatorAddr() const {return const_cast<AODVStandardRREP*>(this)->getOriginatorAddr();}
    virtual void setOriginatorAddr(const L3Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
    virtual ::omnetpp::simtime_t getLifeTime() const;
    virtual void setLifeTime(::omnetpp::simtime_t lifeTime);
    virtual int getTotalHopsToDest() const;
    virtual void setTotalHopsToDest(int totalHopsToDest);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AODVStandardRREP& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AODVStandardRREP& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>src/routing/aodvStandard/AODVStandardControlPackets.msg:93</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Error
 * //
 * class AODVStandardRERR extends AODVStandardControlPacket
 * {
 *     packetType = RERR;
 *     StandardUnreachableNode unreachableNodes[];
 *     bool noDeleteFlag;
 *     unsigned int destCount;
 * }
 * </pre>
 */
class AODVStandardRERR : public ::inet::AODVStandardControlPacket
{
  protected:
    StandardUnreachableNode *unreachableNodes; // array ptr
    unsigned int unreachableNodes_arraysize;
    bool noDeleteFlag;
    unsigned int destCount;

  private:
    void copy(const AODVStandardRERR& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVStandardRERR&);

  public:
    AODVStandardRERR(const char *name=nullptr);
    AODVStandardRERR(const AODVStandardRERR& other);
    virtual ~AODVStandardRERR();
    AODVStandardRERR& operator=(const AODVStandardRERR& other);
    virtual AODVStandardRERR *dup() const override {return new AODVStandardRERR(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setUnreachableNodesArraySize(unsigned int size);
    virtual unsigned int getUnreachableNodesArraySize() const;
    virtual StandardUnreachableNode& getUnreachableNodes(unsigned int k);
    virtual const StandardUnreachableNode& getUnreachableNodes(unsigned int k) const {return const_cast<AODVStandardRERR*>(this)->getUnreachableNodes(k);}
    virtual void setUnreachableNodes(unsigned int k, const StandardUnreachableNode& unreachableNodes);
    virtual bool getNoDeleteFlag() const;
    virtual void setNoDeleteFlag(bool noDeleteFlag);
    virtual unsigned int getDestCount() const;
    virtual void setDestCount(unsigned int destCount);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AODVStandardRERR& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AODVStandardRERR& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>src/routing/aodvStandard/AODVStandardControlPackets.msg:104</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Reply ACK
 * //
 * class AODVStandardRREPACK extends AODVStandardControlPacket
 * {
 *     packetType = RREPACK;
 * }
 * </pre>
 */
class AODVStandardRREPACK : public ::inet::AODVStandardControlPacket
{
  protected:

  private:
    void copy(const AODVStandardRREPACK& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVStandardRREPACK&);

  public:
    AODVStandardRREPACK(const char *name=nullptr);
    AODVStandardRREPACK(const AODVStandardRREPACK& other);
    virtual ~AODVStandardRREPACK();
    AODVStandardRREPACK& operator=(const AODVStandardRREPACK& other);
    virtual AODVStandardRREPACK *dup() const override {return new AODVStandardRREPACK(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AODVStandardRREPACK& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AODVStandardRREPACK& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>src/routing/aodvStandard/AODVStandardControlPackets.msg:112</tt> by nedtool.
 * <pre>
 * //
 * // Represents a timer for a Route Reply packet
 * //
 * message WaitForRREP
 * {
 *     L3Address destAddr;
 *     unsigned int lastTTL;
 *     bool fromInvalidEntry;
 * }
 * </pre>
 */
class WaitForRREP : public ::omnetpp::cMessage
{
  protected:
    L3Address destAddr;
    unsigned int lastTTL;
    bool fromInvalidEntry;

  private:
    void copy(const WaitForRREP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const WaitForRREP&);

  public:
    WaitForRREP(const char *name=nullptr, short kind=0);
    WaitForRREP(const WaitForRREP& other);
    virtual ~WaitForRREP();
    WaitForRREP& operator=(const WaitForRREP& other);
    virtual WaitForRREP *dup() const override {return new WaitForRREP(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual L3Address& getDestAddr();
    virtual const L3Address& getDestAddr() const {return const_cast<WaitForRREP*>(this)->getDestAddr();}
    virtual void setDestAddr(const L3Address& destAddr);
    virtual unsigned int getLastTTL() const;
    virtual void setLastTTL(unsigned int lastTTL);
    virtual bool getFromInvalidEntry() const;
    virtual void setFromInvalidEntry(bool fromInvalidEntry);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const WaitForRREP& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, WaitForRREP& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_AODVSTANDARDCONTROLPACKETS_M_H
