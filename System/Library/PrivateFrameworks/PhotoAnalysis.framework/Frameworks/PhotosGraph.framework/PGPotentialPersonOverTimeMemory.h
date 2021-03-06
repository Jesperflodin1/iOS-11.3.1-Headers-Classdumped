/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphPersonNode, NSArray;

@interface PGPotentialPersonOverTimeMemory : PGPotentialMemory {

	PGGraphPersonNode* _personNode;
	NSArray* _curatedAssets;
	NSArray* _facedAssets;

}

@property (readonly) PGGraphPersonNode * personNode;              //@synthesize personNode=_personNode - In the implementation block
@property (retain) NSArray * facedAssets;                         //@synthesize facedAssets=_facedAssets - In the implementation block
@property (retain) NSArray * curatedAssets;                       //@synthesize curatedAssets=_curatedAssets - In the implementation block
-(id)uuid;
-(void)setCuratedAssets:(NSArray *)arg1 ;
-(NSArray *)curatedAssets;
-(void)setFacedAssets:(NSArray *)arg1 ;
-(NSArray *)facedAssets;
-(id)initWithPersonNode:(id)arg1 momentNodes:(id)arg2 ;
-(PGGraphPersonNode *)personNode;
@end

