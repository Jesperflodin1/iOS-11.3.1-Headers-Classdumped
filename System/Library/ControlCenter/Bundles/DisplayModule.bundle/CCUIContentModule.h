/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/DisplayModule.bundle/DisplayModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol CCUIContentModule <NSObject>
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController * backgroundViewController; 
@optional
-(void)setContentModuleContext:(id)arg1;
-(UIViewController *)backgroundViewController;

@required
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;

@end

