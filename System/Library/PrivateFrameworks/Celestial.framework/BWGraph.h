/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, BWGraphStatusDelegate;
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface BWGraph : NSObject {

	NSMutableArray* _nodes;
	NSMutableArray* _sourceNodes;
	NSMutableArray* _sinkNodes;
	NSMutableArray* _connections;
	NSMutableArray* _outputsWithSharedPools;
	NSMutableDictionary* _outputsWithSharedPoolsForAttachedMedia;
	NSMutableArray* _nodesToPrepareConcurrently;
	BOOL _running;
	BOOL _beingConfigured;
	long long _inflightConfigurationID;
	NSObject*<OS_dispatch_group> _sourceNodesStartGroup;
	NSObject*<OS_dispatch_group> _startGroup;
	NSObject*<OS_dispatch_group> _commitGroup;
	BOOL _supportsLiveReconfiguration;
	int _errorStatus;
	id<BWGraphStatusDelegate> _statusDelegate;
	BOOL _classicRetainedBufferCount;
	BOOL _prefetchesPixelBufferPools;

}

@property (assign) int errorStatus;                                                 //@synthesize errorStatus=_errorStatus - In the implementation block
@property (nonatomic,readonly) BOOL supportsLiveReconfiguration; 
@property (assign,nonatomic) id<BWGraphStatusDelegate> statusDelegate;              //@synthesize statusDelegate=_statusDelegate - In the implementation block
@property (assign,nonatomic) BOOL prefetchesPixelBufferPools;                       //@synthesize prefetchesPixelBufferPools=_prefetchesPixelBufferPools - In the implementation block
+(void)initialize;
-(void)setStatusDelegate:(id<BWGraphStatusDelegate>)arg1 ;
-(BOOL)addNode:(id)arg1 error:(id*)arg2 ;
-(BOOL)connectOutput:(id)arg1 toInput:(id)arg2 pipelineStage:(id)arg3 ;
-(BOOL)commitConfigurationWithID:(long long)arg1 error:(id*)arg2 ;
-(BOOL)supportsLiveReconfiguration;
-(void)waitForSourceNodesToStart;
-(void)waitForOutstandingStartOrCommitOperationToComplete;
-(void)setPrefetchesPixelBufferPools:(BOOL)arg1 ;
-(void)enableConcurrentPrepareForNode:(id)arg1 ;
-(id)_sourceNodes;
-(id)_sinkNodes;
-(id<BWGraphStatusDelegate>)statusDelegate;
-(id)_newDispatchGroupForSinksToTransitionToState:(int)arg1 ;
-(void)setErrorStatus:(int)arg1 ;
-(int)errorStatus;
-(void)_waitForOutstandingStartOrCommitOperationToComplete;
-(void)_logActiveNodesAfterGraphStopTimeout;
-(void)_logActiveSinkNodesAfterGraphStopTimeout;
-(void)_timedOutWaitingForOperationToCompleteWithDescription:(id)arg1 ;
-(BOOL)_resolveFormats:(id*)arg1 ;
-(BOOL)_resolveRetainedBufferCounts:(id*)arg1 ;
-(BOOL)_prepareNodesWithConfigurationChanges:(id*)arg1 ;
-(void)_makeParentConfigurationChangesLive;
-(id)_newDispatchGroupForSinksToBecomeLiveWithConfigurationID:(long long)arg1 ;
-(id)_reverseDepthFirstEnumeratorWithVertexOrdering:(int)arg1 ;
-(void)_resolveVideoRetainedBufferCountsForOutput:(id)arg1 forAttachedMediaKey:(id)arg2 outputsWithSharedPools:(id)arg3 ;
-(id)_depthFirstEnumeratorWithVertexOrdering:(int)arg1 ;
-(id)_breadthFirstEnumerator;
-(id)_reverseBreadthFirstEnumerator;
-(id)_getOutputsWithSharedPoolsForAttachedMediaKey:(id)arg1 ;
-(BOOL)prefetchesPixelBufferPools;
-(id)dotString;
-(id)init;
-(void)dealloc;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(void)beginConfiguration;
@end
