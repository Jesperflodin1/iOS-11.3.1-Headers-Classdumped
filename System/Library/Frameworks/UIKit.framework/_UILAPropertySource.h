/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol _UILAPropertySource <NSObject>
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@required
-(void)setAxis:(long long)arg1;
-(long long)axis;
-(BOOL)layoutFillsCanvas;
-(void)setLayoutFillsCanvas:(BOOL)arg1;
-(BOOL)layoutUsesCanvasMarginsWhenFilling;
-(void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1;
-(NSSet *)_newlyHiddenItems;
-(NSSet *)_newlyUnhiddenItems;

@end

