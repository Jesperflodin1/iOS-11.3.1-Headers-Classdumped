/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityTextSizeModule.bundle/AccessibilityTextSizeModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityTextSizeModule/AXCCTextSizeModuleViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModule.h>

@class UIViewController, CCUIContentModuleContext, AXCCTextSizeModuleViewController, NSString;

@interface AXCCTextSizeModule : NSObject <AXCCTextSizeModuleViewControllerDelegate, CCUIContentModule> {

	CCUIContentModuleContext* _contentModuleContext;
	AXCCTextSizeModuleViewController* _contentViewController;

}

@property (nonatomic,retain) AXCCTextSizeModuleViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                       //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * backgroundViewController; 
-(id)init;
-(void)setContentViewController:(AXCCTextSizeModuleViewController *)arg1 ;
-(AXCCTextSizeModuleViewController *)contentViewController;
-(void)expandModule;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(UIViewController *)backgroundViewController;
@end

