/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKActionSheetAssistantDelegate <NSObject>
@optional
-(void)updatePositionInformationForActionSheetAssistant:(id)arg1;
-(void)actionSheetAssistant:(id)arg1 willStartInteractionWithElement:(id)arg2;
-(BOOL)actionSheetAssistant:(id)arg1 showCustomSheetForElement:(id)arg2;
-(void)actionSheetAssistant:(id)arg1 getAlternateURLForImage:(id)arg2 completion:(/*^block*/id)arg3;
-(id)dataDetectionContextForActionSheetAssistant:(id)arg1;
-(id)selectedTextForActionSheetAssistant:(id)arg1;
-(void)actionSheetAssistantDidStopInteraction:(id)arg1;

@required
-(void)actionSheetAssistant:(id)arg1 performAction:(int)arg2;
-(void)actionSheetAssistant:(id)arg1 openElementAtLocation:(CGPoint)arg2;
-(void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(CGRect)arg3;
-(optional<WebKit::InteractionInformationAtPosition>*)positionInformationForActionSheetAssistant:(id)arg1;
-(RetainPtr<NSArray>*)actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(RetainPtr<NSArray>*)arg3;
-(BOOL)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;

@end

