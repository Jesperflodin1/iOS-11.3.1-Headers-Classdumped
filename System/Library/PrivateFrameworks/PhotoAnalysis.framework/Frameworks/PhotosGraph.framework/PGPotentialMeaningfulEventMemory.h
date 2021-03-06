/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphCollectionNode;

@interface PGPotentialMeaningfulEventMemory : PGPotentialMemory {

	PGGraphCollectionNode* _collectionNode;
	unsigned long long _meaning;

}

@property (readonly) PGGraphCollectionNode * collectionNode;              //@synthesize collectionNode=_collectionNode - In the implementation block
@property (readonly) unsigned long long meaning;                          //@synthesize meaning=_meaning - In the implementation block
-(PGGraphCollectionNode *)collectionNode;
-(unsigned long long)meaning;
-(id)initWithCategory:(long long)arg1 collectionNode:(id)arg2 meaning:(unsigned long long)arg3 controller:(id)arg4 ;
@end

