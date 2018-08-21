/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSSet;

@interface PGRecentPastEventPotentialMemory : PGPotentialMemory {

	BOOL _isBirthday;
	NSSet* _peopleNodes;
	double _meanContentScore;
	double _neighborScore;

}

@property (retain) NSSet * peopleNodes;                  //@synthesize peopleNodes=_peopleNodes - In the implementation block
@property (assign) double meanContentScore;              //@synthesize meanContentScore=_meanContentScore - In the implementation block
@property (assign) double neighborScore;                 //@synthesize neighborScore=_neighborScore - In the implementation block
@property (assign) BOOL isBirthday;                      //@synthesize isBirthday=_isBirthday - In the implementation block
-(id)description;
-(void)setIsBirthday:(BOOL)arg1 ;
-(BOOL)isBirthday;
-(NSSet *)peopleNodes;
-(id)initWithCategory:(long long)arg1 subcategory:(long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4 ;
-(void)setPeopleNodes:(NSSet *)arg1 ;
-(void)computeRemainingScoresWithManager:(id)arg1 controller:(id)arg2 previousPotentialMemory:(id)arg3 ;
-(id)initWithAssetCollection:(id)arg1 momentNode:(id)arg2 subcategory:(long long)arg3 ;
-(double)neighborScore;
-(void)setNeighborScore:(double)arg1 ;
-(double)meanContentScore;
-(void)setMeanContentScore:(double)arg1 ;
@end

