/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <UIKit/UIStateRestoring.h>
#import <UIKit/UIManagedConfigurationRestrictableActivity.h>

@class NSString, MFMailComposeViewController;

@interface UIMailActivity : UIActivity <UIStateRestoring, UIManagedConfigurationRestrictableActivity> {

	BOOL _sourceIsManaged;
	BOOL _keyboardVisible;
	BOOL _hasAnyAccount;
	BOOL _hasValidAccountForSending;
	NSString* _sourceApplicationBundleID;
	NSString* _subject;
	NSString* _autosaveIdentifier;
	MFMailComposeViewController* _mailComposeViewController;

}

@property (nonatomic,retain) MFMailComposeViewController * mailComposeViewController;              //@synthesize mailComposeViewController=_mailComposeViewController - In the implementation block
@property (assign,nonatomic) BOOL hasAnyAccount;                                                   //@synthesize hasAnyAccount=_hasAnyAccount - In the implementation block
@property (assign,nonatomic) BOOL hasValidAccountForSending;                                       //@synthesize hasValidAccountForSending=_hasValidAccountForSending - In the implementation block
@property (nonatomic,copy) NSString * subject;                                                     //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic) BOOL keyboardVisible;                                                 //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
@property (nonatomic,retain) NSString * autosaveIdentifier;                                        //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
@property (assign,nonatomic) BOOL sourceIsManaged;                                                 //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleID;                                   //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
+(long long)activityCategory;
+(unsigned long long)_xpcAttributes;
+(id)applicationBundleID;
-(id)init;
-(void)dealloc;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_cleanup;
-(BOOL)sourceIsManaged;
-(id)activityTitle;
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(NSString *)sourceApplicationBundleID;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(id)_bundleIdentifierForActivityImageCreation;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(BOOL)keyboardVisible;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setKeyboardVisible:(BOOL)arg1 ;
-(void)_setMailSubject:(id)arg1 ;
-(id)_mailDraftRestorationURL;
-(void)_deleteMailDraftIdentifierRestorationArchive:(id)arg1 ;
-(id)_stateRestorationDraftIsAvailable;
-(MFMailComposeViewController *)mailComposeViewController;
-(void)autosaveWithHandler:(/*^block*/id)arg1 ;
-(void)setHasAnyAccount:(BOOL)arg1 ;
-(void)setHasValidAccountForSending:(BOOL)arg1 ;
-(BOOL)hasAnyAccount;
-(BOOL)hasValidAccountForSending;
-(NSString *)autosaveIdentifier;
-(BOOL)_restoreDraft;
-(void)setMailComposeViewController:(MFMailComposeViewController *)arg1 ;
-(void)_saveDraft:(id)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)setAutosaveIdentifier:(NSString *)arg1 ;
@end

