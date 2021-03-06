/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class PGGraphNode;

@interface PGPlaceMemoryTitleGenerator : PGTitleGenerator {

	PGGraphNode* _placeNode;

}

@property (nonatomic,retain) PGGraphNode * placeNode;              //@synthesize placeNode=_placeNode - In the implementation block
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)_placeTitle;
-(id)initWithMomentNodes:(id)arg1 placeNode:(id)arg2 ;
-(PGGraphNode *)placeNode;
-(void)setPlaceNode:(PGGraphNode *)arg1 ;
@end

