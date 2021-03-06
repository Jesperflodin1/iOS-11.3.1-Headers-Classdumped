/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@class PKRendererController;

@interface PKImageRenderer : NSObject {

	PKRendererController* _rendererController;
	double _scale;
	long long _cancelCount;

}

@property (nonatomic,retain) PKRendererController * rendererController;              //@synthesize rendererController=_rendererController - In the implementation block
@property (assign,nonatomic) double scale;                                           //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long cancelCount;                                  //@synthesize cancelCount=_cancelCount - In the implementation block
-(double)scale;
-(void)cancel;
-(void)dealloc;
-(void)setScale:(double)arg1 ;
-(void)resume;
-(PKRendererController *)rendererController;
-(void)setRendererController:(PKRendererController *)arg1 ;
-(void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 scale:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)renderDrawing:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)cancelCount;
-(void)setCancelCount:(long long)arg1 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 scale:(double)arg3 completion:(/*^block*/id)arg4 ;
@end

