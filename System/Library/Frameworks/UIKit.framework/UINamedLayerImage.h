/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol UINamedLayerImage <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) int blendMode; 
@property (assign,nonatomic) BOOL fixedFrame; 
@optional
-(id)imageObj;
-(BOOL)fixedFrame;
-(void)setFixedFrame:(BOOL)arg1;

@required
-(CGRect)frame;
-(NSString *)name;
-(double)opacity;
-(int)blendMode;

@end

