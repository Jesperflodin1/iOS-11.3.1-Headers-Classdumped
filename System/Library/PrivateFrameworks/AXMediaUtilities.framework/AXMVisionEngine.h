/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMVisionEngineNodeConnectionDelegate.h>
#import <AXMediaUtilities/AXMFeatureTrackingManagerDelegate.h>
#import <AXMediaUtilities/AXMTaskDispatcherDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <AXMediaUtilities/AXMDescribing.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, _AXMVisionEngineAnalysisTask, AXMFeatureTrackingManager, NSMapTable, NSString, AXMVisionEngineCache, AXMVisionEngineDiagnosticInfo, AXMService, AXMTaskDispatcher, NSArray;

@interface AXMVisionEngine : NSObject <AXMVisionEngineNodeConnectionDelegate, AXMFeatureTrackingManagerDelegate, AXMTaskDispatcherDelegate, NSCopying, NSSecureCoding, AXMDescribing> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_sourceNodes;
	NSMutableArray* _queue_evaluationNodes;
	NSMutableArray* _queue_resultHandlers;
	BOOL _queue_shouldNotifyServiceOfEngineConfigChange;
	_AXMVisionEngineAnalysisTask* _queue_currentTask;
	AXMFeatureTrackingManager* _queue_featureTrackingManager;
	NSMapTable* _queue_featureTrackingObservers;
	BOOL _prioritySchedulingEnabled;
	BOOL _featureTrackingEnabled;
	BOOL _diagnosticsEnabled;
	NSString* _identifier;
	long long _maximumQueueSize;
	unsigned long long _thresholdPriority;
	AXMVisionEngineCache* _cache;
	AXMVisionEngineDiagnosticInfo* _diagnosticInfo;
	AXMService* _axMediaUtilsService;
	AXMTaskDispatcher* _taskDispatcher;

}

@property (copy) NSString * identifier;                                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) AXMService * axMediaUtilsService;                                         //@synthesize axMediaUtilsService=_axMediaUtilsService - In the implementation block
@property (nonatomic,retain) AXMVisionEngineCache * cache;                                             //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) AXMTaskDispatcher * taskDispatcher;                                       //@synthesize taskDispatcher=_taskDispatcher - In the implementation block
@property (nonatomic,retain) AXMVisionEngineDiagnosticInfo * diagnosticInfo;                           //@synthesize diagnosticInfo=_diagnosticInfo - In the implementation block
@property (nonatomic,readonly) NSArray * sourceNodes; 
@property (nonatomic,readonly) NSArray * evaluationNodes; 
@property (assign) long long maximumQueueSize;                                                         //@synthesize maximumQueueSize=_maximumQueueSize - In the implementation block
@property (assign) BOOL prioritySchedulingEnabled;                                                     //@synthesize prioritySchedulingEnabled=_prioritySchedulingEnabled - In the implementation block
@property (assign) unsigned long long thresholdPriority;                                               //@synthesize thresholdPriority=_thresholdPriority - In the implementation block
@property (nonatomic,readonly) BOOL isCachingEnabled; 
@property (nonatomic,readonly) long long cacheSize; 
@property (assign,getter=isFeatureTrackingEnabled,nonatomic) BOOL featureTrackingEnabled;              //@synthesize featureTrackingEnabled=_featureTrackingEnabled - In the implementation block
@property (nonatomic,readonly) NSArray * trackedFaces; 
@property (nonatomic,readonly) NSArray * trackedText; 
@property (nonatomic,readonly) NSArray * trackedRectangles; 
@property (nonatomic,readonly) NSArray * trackedModelClassifiers; 
@property (assign,getter=areDiagnosticsEnabled,nonatomic) BOOL diagnosticsEnabled;                     //@synthesize diagnosticsEnabled=_diagnosticsEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_commonInit;
-(id)initWithIdentifier:(id)arg1 ;
-(AXMVisionEngineCache *)cache;
-(void)setCache:(AXMVisionEngineCache *)arg1 ;
-(void)setDiagnosticInfo:(AXMVisionEngineDiagnosticInfo *)arg1 ;
-(AXMVisionEngineDiagnosticInfo *)diagnosticInfo;
-(void)setAxMediaUtilsService:(AXMService *)arg1 ;
-(void)setTaskDispatcher:(AXMTaskDispatcher *)arg1 ;
-(BOOL)isEqualToEngine:(id)arg1 ;
-(NSArray *)sourceNodes;
-(NSArray *)evaluationNodes;
-(void)setMaximumQueueSize:(long long)arg1 ;
-(void)setPrioritySchedulingEnabled:(BOOL)arg1 ;
-(void)setThresholdPriority:(unsigned long long)arg1 ;
-(void)setFeatureTrackingEnabled:(BOOL)arg1 ;
-(long long)maximumQueueSize;
-(void)addSourceNode:(id)arg1 ;
-(void)addEvaluationNode:(id)arg1 ;
-(BOOL)areDiagnosticsEnabled;
-(BOOL)prioritySchedulingEnabled;
-(BOOL)isFeatureTrackingEnabled;
-(unsigned long long)thresholdPriority;
-(id)resultHandlers;
-(BOOL)_queue_shouldContinueWithoutResultHandlers:(id)arg1 ;
-(AXMService *)axMediaUtilsService;
-(void)_queue_handleEvaluatedContext:(id)arg1 result:(id)arg2 error:(id)arg3 ;
-(BOOL)_queue_shouldEvaluateNode:(id)arg1 withOptions:(id)arg2 ;
-(id)_queue_activeEvaluationNodesForOptions:(id)arg1 applyPriorityScheduling:(BOOL)arg2 ;
-(BOOL)_queue_activeEvaluationNodesExclusivelyUseVisionFramework:(id)arg1 ;
-(void)_queue_logEvaluatedResult:(id)arg1 ;
-(void)_invokeResultHandlers:(id)arg1 withError:(id)arg2 ;
-(void)_invokeResultHandlers:(id)arg1 withResult:(id)arg2 ;
-(BOOL)canAddSourceNode:(id)arg1 ;
-(BOOL)canAddEvaluationNode:(id)arg1 ;
-(id)_queue_sourceNodeWithIdentifier:(id)arg1 ;
-(id)_queue_evaluationNodeWithIdentifier:(id)arg1 ;
-(id)_queue_makeUniqueIdentifierForNode:(Class)arg1 ;
-(BOOL)_queue_nodeIdentifierExists:(id)arg1 ;
-(void)_queue_addResultHandler:(/*^block*/id)arg1 ;
-(void)_queue_removeResultHandler:(/*^block*/id)arg1 ;
-(void)_queue_removeAllResultHandlers;
-(id)axmDescription;
-(void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2 ;
-(void)_queue_remotelyEvaluateWithSource:(id)arg1 context:(id)arg2 ;
-(void)_queue_evaluateWithSource:(id)arg1 context:(id)arg2 ;
-(void)_queue_addFeatureTrackingObbserver:(id)arg1 targetQueue:(id)arg2 ;
-(void)_queue_removeFeatureTrackingObbserver:(id)arg1 ;
-(void)_queue_removeAllFeatureTrackingObservers;
-(AXMTaskDispatcher *)taskDispatcher;
-(void)triggerWithSource:(id)arg1 context:(id)arg2 ;
-(BOOL)engineWillAcceptTiggerWithSource:(id)arg1 ;
-(void)captureSessionNodeDidBeginProcessingFrames:(id)arg1 ;
-(void)captureSessionNodeDidEndProcessingFrames:(id)arg1 ;
-(void)captureSessionNodeWillProcessFrame:(id)arg1 ;
-(void)captureSessionNodeDidDropFrame:(id)arg1 ;
-(void)trackingManager:(id)arg1 didBeginTrackingFeature:(id)arg2 appliedOrientation:(id)arg3 ;
-(void)trackingManager:(id)arg1 didFinishTrackingFeature:(id)arg2 appliedOrientation:(id)arg3 ;
-(void)trackingManager:(id)arg1 trackingFeatureLocationDidChange:(id)arg2 appliedOrientation:(id)arg3 ;
-(void)dispatcher:(id)arg1 handleTask:(id)arg2 ;
-(BOOL)canAddSourceNodeClass:(Class)arg1 ;
-(void)insertSourceNode:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeSourceNode:(id)arg1 ;
-(void)removeAllSourceNodes;
-(BOOL)canAddEvaluationNodeClass:(Class)arg1 ;
-(void)insertEvaluationNode:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeEvaluationNode:(id)arg1 ;
-(void)removeAllEvaluationNodes;
-(id)sourceNodeWithIdentifier:(id)arg1 ;
-(id)evaluationNodeWithIdentifier:(id)arg1 ;
-(id)makeUniqueIdentifierForNode:(Class)arg1 ;
-(BOOL)nodeIdentifierExists:(id)arg1 ;
-(void)addResultHandler:(/*^block*/id)arg1 ;
-(void)removeResultHandler:(/*^block*/id)arg1 ;
-(void)removeAllResultHandlers;
-(void)enableResultCachingWithCacheSize:(long long)arg1 ;
-(void)disableResultCaching;
-(void)updateEngineConfiguration:(/*^block*/id)arg1 ;
-(void)prewarmEngine;
-(void)purgeResources:(/*^block*/id)arg1 ;
-(void)addFeatureTrackingObbserver:(id)arg1 targetQueue:(id)arg2 ;
-(void)removeFeatureTrackingObbserver:(id)arg1 ;
-(void)removeAllFeatureTrackingObservers;
-(NSArray *)trackedFaces;
-(NSArray *)trackedText;
-(NSArray *)trackedRectangles;
-(NSArray *)trackedModelClassifiers;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(long long)cacheSize;
-(BOOL)isCachingEnabled;
@end

