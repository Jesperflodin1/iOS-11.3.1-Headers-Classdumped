//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet;

@interface ABConnectionGraph : NSObject
{
    NSSet *_peers;
    NSSet *_ports;
    NSDictionary *_graph;
}

@property(retain, nonatomic) NSDictionary *graph; // @synthesize graph=_graph;
@property(retain, nonatomic) NSSet *ports; // @synthesize ports=_ports;
@property(retain, nonatomic) NSSet *peers; // @synthesize peers=_peers;
- (void).cxx_destruct;
- (id)intermediateReceiverPortWithIndex:(unsigned char)arg1;
- (id)intermediateSenderPortWithIndex:(unsigned char)arg1;
- (id)replacePort:(id)arg1;
- (id)graphWithoutIntermediatePorts;
- (id)copy;
- (void)checkConsistency;
- (id)nodesForPeer:(id)arg1;
- (void)appendDescription:(id)arg1 resultString:(id)arg2 indentation:(unsigned long long)arg3;
- (id)description;
- (void)handleNodeRemove:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)addNode:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *nodes;
- (id)nodeForPort:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1 registry:(id)arg2;
- (id)initWithGraph:(id)arg1 peers:(id)arg2 ports:(id)arg3;
- (void)dealloc;
- (id)init;

@end

