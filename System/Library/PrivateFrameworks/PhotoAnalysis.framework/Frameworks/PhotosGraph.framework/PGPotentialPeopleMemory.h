/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphNode, NSArray;

@interface PGPotentialPeopleMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphNode* _peopleNode;
	long long _year;
	NSArray* _facedAssets;

}

@property (retain) PGGraphNode * peopleNode;              //@synthesize peopleNode=_peopleNode - In the implementation block
@property (readonly) long long year;                      //@synthesize year=_year - In the implementation block
@property (retain) NSArray * facedAssets;                 //@synthesize facedAssets=_facedAssets - In the implementation block
-(long long)year;
-(void)addMomentNode:(id)arg1 ;
-(void)setFacedAssets:(NSArray *)arg1 ;
-(NSArray *)facedAssets;
-(id)initWithSubcategory:(long long)arg1 peopleNode:(id)arg2 year:(long long)arg3 ;
-(PGGraphNode *)peopleNode;
-(void)setPeopleNode:(PGGraphNode *)arg1 ;
@end
