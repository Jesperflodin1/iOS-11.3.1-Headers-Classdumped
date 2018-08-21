/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WGWidgetVisibilityDelegate;
#import <Widgets/Widgets-Structs.h>
@class NSMutableDictionary, NSMutableSet;

@interface WGWidgetVisibilityManager : NSObject {

	NSMutableDictionary* _widgetTagsByIdentifier;
	NSMutableDictionary* _extensionHashByIdentifier;
	NSMutableDictionary* _mobileGestaltAnswerByWidgetTag;
	NSMutableDictionary* _visibilityDefaultValueByIdentifier;
	NSMutableDictionary* _visibilityPreferenceByIdentifier;
	NSMutableSet* _visibilityOverridenIdentifiers;
	NSMutableSet* _mobileGestaltQuestions;
	MGNotificationTokenStructRef _mobileGestaltNotificationToken;
	BOOL _delegateRespondsToWidgetVisibilityDidChange;
	id<WGWidgetVisibilityDelegate> _delegate;

}

@property (getter=_mobileGestaltAnswerByWidgetTag,nonatomic,retain) NSMutableDictionary * mobileGestaltAnswerByWidgetTag;              //@synthesize mobileGestaltAnswerByWidgetTag=_mobileGestaltAnswerByWidgetTag - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetVisibilityDelegate> delegate;                                                           //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WGWidgetVisibilityDelegate>)delegate;
-(void)setDelegate:(id<WGWidgetVisibilityDelegate>)arg1 ;
-(void)dealloc;
-(void)_registerForVisiblityPreferenceChanges;
-(void)_unregisterForVisiblityPreferenceChanges;
-(void)_updateWidgetTagsAndVisibilityForExtensions:(id)arg1 ;
-(void)_updateMobileGestaltQuestions;
-(void)_updateWidgetTagsAndIconVisibilityForExtension:(id)arg1 ;
-(id)_widgetTagsForWidgetExtensionInfoDictionary:(id)arg1 ;
-(BOOL)_updateWidgetVisibilityPreference:(id)arg1 ;
-(id)_allWidgetTags;
-(id)_mobileGestaltAnswerByWidgetTag;
-(void)_widgetVisibilityChanged;
-(BOOL)_updateWidgetVisibilityPreferences;
-(BOOL)isWidgetWithIdentifierVisible:(id)arg1 ;
-(void)updateVisibilityForExtensions:(id)arg1 ;
-(void)_widgetVisibilityPreferencesChanged;
-(void)setMobileGestaltAnswerByWidgetTag:(NSMutableDictionary *)arg1 ;
@end

