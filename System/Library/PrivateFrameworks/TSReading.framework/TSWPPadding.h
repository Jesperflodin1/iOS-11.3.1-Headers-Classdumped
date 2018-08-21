/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPPadding : NSObject {

	double _topInset;
	double _leftInset;
	double _bottomInset;
	double _rightInset;

}

@property (assign,nonatomic) double topInset;                 //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic) double leftInset;                //@synthesize leftInset=_leftInset - In the implementation block
@property (assign,nonatomic) double bottomInset;              //@synthesize bottomInset=_bottomInset - In the implementation block
@property (assign,nonatomic) double rightInset;               //@synthesize rightInset=_rightInset - In the implementation block
+(id)padding;
+(id)paddingWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)topInset;
-(void)setTopInset:(double)arg1 ;
-(double)bottomInset;
-(double)leftInset;
-(double)rightInset;
-(id)initWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4 ;
-(void)transform:(CGAffineTransform)arg1 ;
-(void)setLeftInset:(double)arg1 ;
-(void)setBottomInset:(double)arg1 ;
-(void)setRightInset:(double)arg1 ;
@end
