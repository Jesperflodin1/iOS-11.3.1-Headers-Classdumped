/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <Foundation/NSOperation.h>

@protocol DOCThumbnailOperationDelegate;
@interface DOCThumbnailBaseOperation : NSOperation {

	BOOL _representativeIcon;
	unsigned _qos;
	long long _executionState;
	double _scale;
	unsigned long long _style;
	id<DOCThumbnailOperationDelegate> _delegate;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                                                 //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<DOCThumbnailOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long executionState;                                     //@synthesize executionState=_executionState - In the implementation block
@property (assign,nonatomic) BOOL representativeIcon;                                        //@synthesize representativeIcon=_representativeIcon - In the implementation block
@property (assign,nonatomic) unsigned qos;                                                   //@synthesize qos=_qos - In the implementation block
+(id)processImage:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 backgroundDecorator:(/*^block*/id)arg5 foregroundDecorator:(/*^block*/id)arg6 ;
-(void)setQos:(unsigned)arg1 ;
-(unsigned)qos;
-(double)scale;
-(CGSize)size;
-(id<DOCThumbnailOperationDelegate>)delegate;
-(void)setDelegate:(id<DOCThumbnailOperationDelegate>)arg1 ;
-(unsigned long long)style;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)notifyDelegateWithThumbnail:(id)arg1 failed:(BOOL)arg2 representativeIcon:(BOOL)arg3 ;
-(BOOL)generateThumbnail:(id*)arg1 representativeIcon:(BOOL*)arg2 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 delegate:(id)arg3 style:(unsigned long long)arg4 qos:(unsigned)arg5 ;
-(BOOL)representativeIcon;
-(void)setRepresentativeIcon:(BOOL)arg1 ;
-(long long)executionState;
-(void)setExecutionState:(long long)arg1 ;
@end

