/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/HearingAidsModule.bundle/HearingAidsModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class UIViewController, HACCModuleViewController, NSString;

@interface HACCModule : NSObject <CCUIContentModule> {

	HACCModuleViewController* _contentViewController;

}

@property (nonatomic,retain) HACCModuleViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * backgroundViewController; 
-(id)init;
-(void)setContentViewController:(HACCModuleViewController *)arg1 ;
-(HACCModuleViewController *)contentViewController;
-(void)setContentModuleContext:(id)arg1 ;
@end

