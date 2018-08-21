/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/MSMessageExtensionBalloonPlugin.bundle/MSMessageExtensionBalloonPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MSMessageExtensionBalloonPlugin/MSMessageExtensionBalloonPlugin-Structs.h>
#import <ChatKit/CKBrowserViewController.h>
#import <MSMessageExtensionBalloonPlugin/_MSMessageComposeHostProtocol.h>
#import <libobjc.A.dylib/CKBrowserDragControllerDelegate.h>
#import <MSMessageExtensionBalloonPlugin/MSMessageExtensionDataSourceDelegate.h>

@protocol NSCopying, _MSMessageComposeExtensionImplProtocol;
@class NSData, UIViewController, NSString, NSArray, MSMessage, _MSMessageMediaPayload, NSMutableArray, IMBalloonAppExtension;

@interface MSMessageExtensionBrowserViewController : CKBrowserViewController <_MSMessageComposeHostProtocol, CKBrowserDragControllerDelegate, MSMessageExtensionDataSourceDelegate> {

	BOOL _shouldAutomaticallyForwardAppearanceMethods;
	BOOL _extensionIsActive;
	BOOL _extensionLoadRequestInFlight;
	BOOL _isInDeferredTeardown;
	BOOL _isWaitingForReply;
	NSData* _conversationEngramID;
	UIViewController* _remoteViewController;
	NSString* _sender;
	NSArray* _recipients;
	MSMessage* _message;
	id<NSCopying> _sessionUUID;
	id<_MSMessageComposeExtensionImplProtocol> _appContext;
	_MSMessageMediaPayload* _currentDragPayload;
	/*^block*/id _completionHandler;
	unsigned long long _extensionLoadRequestCount;
	NSMutableArray* _extensionLoadRequestCompletionBlockArray;

}

@property (nonatomic,retain) UIViewController * remoteViewController;                                //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) IMBalloonAppExtension * balloonExtensionPlugin; 
@property (nonatomic,retain) id<NSCopying> sessionUUID;                                              //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,retain) id<_MSMessageComposeExtensionImplProtocol> appContext;                  //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) _MSMessageMediaPayload * currentDragPayload;                            //@synthesize currentDragPayload=_currentDragPayload - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL extensionIsActive;                                                 //@synthesize extensionIsActive=_extensionIsActive - In the implementation block
@property (assign,nonatomic) BOOL shouldAutomaticallyForwardAppearanceMethods;                       //@synthesize shouldAutomaticallyForwardAppearanceMethods=_shouldAutomaticallyForwardAppearanceMethods - In the implementation block
@property (assign,nonatomic) unsigned long long extensionLoadRequestCount;                           //@synthesize extensionLoadRequestCount=_extensionLoadRequestCount - In the implementation block
@property (assign,nonatomic) BOOL extensionLoadRequestInFlight;                                      //@synthesize extensionLoadRequestInFlight=_extensionLoadRequestInFlight - In the implementation block
@property (nonatomic,retain) NSMutableArray * extensionLoadRequestCompletionBlockArray;              //@synthesize extensionLoadRequestCompletionBlockArray=_extensionLoadRequestCompletionBlockArray - In the implementation block
@property (assign,nonatomic) BOOL isInDeferredTeardown;                                              //@synthesize isInDeferredTeardown=_isInDeferredTeardown - In the implementation block
@property (assign,nonatomic) BOOL isWaitingForReply;                                                 //@synthesize isWaitingForReply=_isWaitingForReply - In the implementation block
@property (nonatomic,retain) MSMessage * message;                                                    //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setExtensionLoadRequestCompletionBlockArray:(NSMutableArray *)arg1 ;
-(void)setExtensionIsActive:(BOOL)arg1 ;
-(BOOL)extensionIsActive;
-(id)substituteNameInString:(id)arg1 ;
-(id)_itemPayloadFromMSMessage:(id)arg1 ;
-(IMBalloonAppExtension *)balloonExtensionPlugin;
-(id)substituteNameInString:(id)arg1 withAppID:(id)arg2 ;
-(void)_handleExtensionInterruption:(id)arg1 ;
-(BOOL)isInDeferredTeardown;
-(void)_postCurrentPluginBrowserViewDidPrepareForDisplay;
-(void)_instantiateRemoteViewControllerIfNeeded:(/*^block*/id)arg1 ;
-(void)_removeRemoteViewControllerAndCancelExtensionRequestIfNeeded;
-(id)currentConversationState;
-(void)_markCurrentMessageAsPlayedIfNeeded;
-(unsigned long long)extensionLoadRequestCount;
-(void)setExtensionLoadRequestCount:(unsigned long long)arg1 ;
-(BOOL)isWaitingForReply;
-(void)setIsInDeferredTeardown:(BOOL)arg1 ;
-(void)_sendResignActiveMessage;
-(void)setIsWaitingForReply:(BOOL)arg1 ;
-(void)_cancelExtensionRequest;
-(void)_sendBecomeActiveMessage;
-(void)_addRemoteViewController;
-(void)setExtensionLoadRequestInFlight:(BOOL)arg1 ;
-(NSMutableArray *)extensionLoadRequestCompletionBlockArray;
-(void)_addRemoteViewControllerAndConfigureExtension;
-(BOOL)extensionLoadRequestInFlight;
-(void)_callAndDequeuLoadCompletionBlocks:(BOOL)arg1 ;
-(void)_sendInstantiationRequestToExtensionWithHandler:(/*^block*/id)arg1 ;
-(void)setShouldAutomaticallyForwardAppearanceMethods:(BOOL)arg1 ;
-(void)_removeRemoteViewController;
-(void)_configureMessage:(id)arg1 withConversation:(id)arg2 ;
-(BOOL)allowAllPayloadCommits;
-(_MSMessageMediaPayload *)currentDragPayload;
-(void)setCurrentDragPayload:(_MSMessageMediaPayload *)arg1 ;
-(void)datasourcePayloadDidChange:(id)arg1 updateFlags:(unsigned long long)arg2 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)didReceiveMemoryWarning;
-(id)sender;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(unsigned long long)presentationStyle;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setMessage:(MSMessage *)arg1 ;
-(MSMessage *)message;
-(BOOL)isLoaded;
-(void)setSender:(id)arg1 ;
-(void)prepareForDisplay;
-(id)extension;
-(UIViewController *)remoteViewController;
-(void)_dismiss;
-(void)setRemoteViewController:(UIViewController *)arg1 ;
-(void)setAppContext:(id<_MSMessageComposeExtensionImplProtocol>)arg1 ;
-(id)recipients;
-(void)setRecipients:(id)arg1 ;
-(id<_MSMessageComposeExtensionImplProtocol>)appContext;
-(void)didCancelSendingPluginPayload:(id)arg1 ;
-(void)didStartSendingPluginPayload:(id)arg1 ;
-(void)validatePayloadForSending:(id)arg1 associatedText:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)killExtensionProcess;
-(void)deferredForceTearDownRemoteView;
-(void)forceTearDownRemoteView;
-(id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2 ;
-(BOOL)canReplaceDataSource;
-(void)setBalloonPluginDataSource:(id)arg1 ;
-(BOOL)dragManager:(id)arg1 canScaleItem:(id)arg2 ;
-(BOOL)dragManager:(id)arg1 canRotateItem:(id)arg2 ;
-(BOOL)dragManager:(id)arg1 canPeelItem:(id)arg2 ;
-(void)dragManager:(id)arg1 didBeginDraggingItem:(id)arg2 ;
-(void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4 ;
-(void)dragManager:(id)arg1 didDragItem:(id)arg2 toDragTarget:(id)arg3 ;
-(BOOL)dragManager:(id)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4 ;
-(void)browserScrolledOnScreen;
-(BOOL)shouldShowChatChrome;
-(BOOL)wantsDarkUI;
-(BOOL)wantsOpaqueUI;
-(BOOL)mayBeKeptInViewHierarchy;
-(BOOL)shouldSuppressEntryView;
-(id)requestSnapshotDataForPersistance;
-(void)beginSuppressingAppearanceMethods;
-(void)endSuppressingAppearanceMethods;
-(id)cancelTouchesInView;
-(void)loadRemoteView;
-(void)unloadRemoteView;
-(void)saveSnapshotForBrowserViewController;
-(void)beginDisablingUserInteraction;
-(void)endDisablingUserInteraction;
-(void)browserScrolledOffScreen;
-(void)viewWillTransitionToExpandedPresentation;
-(void)viewDidTransitionToExpandedPresentation;
-(void)viewWillTransitionToCompactPresentation;
-(void)viewDidTransitionToCompactPresentation;
-(void)messageAddedWithDataSource:(id)arg1 ;
-(id)conversationEngramID;
-(void)setConversationEngramID:(id)arg1 ;
-(void)handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_remoteViewDidBecomeReadyForDisplay;
-(void)_stageAppItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_stageMediaItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_stageRichLink:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_startDragMediaItem:(id)arg1 frameInRemoteView:(CGRect)arg2 fence:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_requestPresentationStyleExpanded:(BOOL)arg1 ;
-(void)_updateSnapshotForNextLaunch:(id)arg1 ;
-(void)_openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestResize;
-(id<NSCopying>)sessionUUID;
-(void)setSessionUUID:(id<NSCopying>)arg1 ;
-(id)remoteProxy;
@end

