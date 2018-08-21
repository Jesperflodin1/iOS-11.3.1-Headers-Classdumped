/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVPersonPromoterDelegate;
@class PVPersonClusterManager, NSDictionary, NSMapTable, PVPersonDeduperProfile, NSString;

@interface PVPersonDeduperStep : NSObject {

	BOOL _shouldStop;
	float _progress;
	PVPersonClusterManager* _personClusterManager;
	NSDictionary* _invalidCandidatesMapping;
	NSMapTable* _mergeRelations;
	id<PVPersonPromoterDelegate> _delegate;
	PVPersonDeduperProfile* _profile;

}

@property (nonatomic,readonly) PVPersonClusterManager * personClusterManager;              //@synthesize personClusterManager=_personClusterManager - In the implementation block
@property (nonatomic,readonly) NSDictionary * invalidCandidatesMapping;                    //@synthesize invalidCandidatesMapping=_invalidCandidatesMapping - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic,__weak) id<PVPersonPromoterDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMapTable * mergeRelations;                                //@synthesize mergeRelations=_mergeRelations - In the implementation block
@property (nonatomic,readonly) PVPersonDeduperProfile * profile;                           //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) BOOL shouldStop;                                              //@synthesize shouldStop=_shouldStop - In the implementation block
@property (assign,nonatomic) float progress;                                               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSString * metricsKey; 
-(id<PVPersonPromoterDelegate>)delegate;
-(void)setDelegate:(id<PVPersonPromoterDelegate>)arg1 ;
-(NSString *)name;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(BOOL)shouldStop;
-(void)setShouldStop:(BOOL)arg1 ;
-(NSString *)metricsKey;
-(void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(id)initWithPersonClusterManager:(id)arg1 invalidCandidatesMapping:(id)arg2 profile:(id)arg3 ;
-(PVPersonClusterManager *)personClusterManager;
-(BOOL)shouldStopWithUpdateBlock:(/*^block*/id)arg1 ;
-(BOOL)addPotentialMergeCandidateForPerson:(id)arg1 withOtherPerson:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)mergeCandidatePersonsWithUpdateBlock:(/*^block*/id)arg1 ;
-(BOOL)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3 ;
-(id)_resolveMergeCandidate:(id)arg1 forPerson:(id)arg2 ;
-(NSMapTable *)mergeRelations;
-(NSDictionary *)invalidCandidatesMapping;
-(PVPersonDeduperProfile *)profile;
@end

