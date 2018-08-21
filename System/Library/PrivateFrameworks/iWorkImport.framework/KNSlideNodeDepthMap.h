/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface KNSlideNodeDepthMap : NSObject {

	NSArray* _slideNodes;
	NSArray* _depthsOfSlideNodes;

}

@property (nonatomic,readonly) NSArray * slideNodes;                      //@synthesize slideNodes=_slideNodes - In the implementation block
@property (nonatomic,readonly) NSArray * depthsOfSlideNodes;              //@synthesize depthsOfSlideNodes=_depthsOfSlideNodes - In the implementation block
-(NSArray *)slideNodes;
-(id)initWithSlideNodes:(id)arg1 depths:(id)arg2 ;
-(void)enumerateSlideNodesAndDepthsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)depthsOfSlideNodes;
@end

