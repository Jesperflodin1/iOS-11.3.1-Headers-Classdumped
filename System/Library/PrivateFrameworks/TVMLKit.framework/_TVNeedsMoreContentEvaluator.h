/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIScrollView, IKViewElement;

@interface _TVNeedsMoreContentEvaluator : NSObject {

	UIScrollView* _scrollView;
	long long _axis;
	long long _state;
	IKViewElement* _viewElement;
	double _threshold;

}

@property (assign,nonatomic) long long state;                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double threshold;                         //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) long long axis;                         //@synthesize axis=_axis - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(UIScrollView *)scrollView;
-(long long)axis;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(id)initWithScrollView:(id)arg1 axis:(long long)arg2 ;
-(void)evaluateForState:(long long)arg1 ;
-(void)setThreshold:(double)arg1 ;
-(double)threshold;
@end

