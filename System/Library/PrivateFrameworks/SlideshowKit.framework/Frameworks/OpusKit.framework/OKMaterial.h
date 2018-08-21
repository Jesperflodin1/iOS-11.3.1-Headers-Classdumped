/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OKSettingsSupport.h>

@protocol OKWidgetProtocol;
@class OKPresentationMaterial, NSString;

@interface OKMaterial : NSObject <OKSettingsSupport> {

	OKPresentationMaterial* _material;
	BOOL _needsApplySettings;
	BOOL _hasSettingsApplied;
	id<OKWidgetProtocol> _parentWidget;

}

@property (assign,nonatomic) id<OKWidgetProtocol> parentWidget;              //@synthesize parentWidget=_parentWidget - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(NSString *)name;
-(void)load;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(id<OKWidgetProtocol>)parentWidget;
-(void)setNeedsApplySettings;
-(void)applySettingsIfNeeded;
-(void)applySettings;
-(id)initWithMaterial:(id)arg1 ;
-(void)setParentWidget:(id<OKWidgetProtocol>)arg1 ;
@end

