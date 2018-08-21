/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFWebProcessPlugInPageController.h>
#import <libobjc.A.dylib/SFFormAutoFiller.h>
#import <libobjc.A.dylib/SFInjectedJavaScriptWebProcessController.h>

@protocol _SFAutomaticBugCaptureObserver;
@class _WKRemoteObjectInterface, WKWebProcessPlugInScriptWorld, NSTimer, _SFFormMetadataController, NSString;

@interface _SFWebProcessPlugInAutoFillPageController : _SFWebProcessPlugInPageController <SFFormAutoFiller, SFInjectedJavaScriptWebProcessController> {

	_WKRemoteObjectInterface* _activityControllerInterface;
	_WKRemoteObjectInterface* _autoFillerInterface;
	WKWebProcessPlugInScriptWorld* _isolatedWorld;
	id<_SFAutomaticBugCaptureObserver> _automaticBugCaptureObserver;
	NSTimer* _deferredLoadingWatchdogTimer;
	_SFFormMetadataController* _formMetadataController;
	unsigned long long _loadDeferringReasons;

}

@property (nonatomic,retain) _SFFormMetadataController * formMetadataController;              //@synthesize formMetadataController=_formMetadataController - In the implementation block
@property (nonatomic,readonly) unsigned long long loadDeferringReasons;                       //@synthesize loadDeferringReasons=_loadDeferringReasons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlugIn:(id)arg1 contextController:(id)arg2 ;
-(void)willDestroyBrowserContextController:(id)arg1 ;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 selectFieldAfterFilling:(id)arg4 ;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5 ;
-(void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2 ;
-(void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 andClearField:(id)arg3 inFrame:(id)arg4 ;
-(void)collectURLsForPrefillingAtURL:(id)arg1 ;
-(void)collectFormMetadataForPrefillingAtURL:(id)arg1 ;
-(void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 atURL:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)clearAutoFillMetadata;
-(void)resumeLoadingAfterSavingFormData;
-(unsigned long long)loadDeferringReasons;
-(void)addLoadDeferringReasons:(unsigned long long)arg1 ;
-(void)removeLoadDeferringReasons:(unsigned long long)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3 ;
-(void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(_SFFormMetadataController *)formMetadataController;
-(void)_invalidateDeferredLoadingWatchdogTimer;
-(id)_automaticBugCaptureObserver;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2 ;
-(void)setFormMetadataController:(_SFFormMetadataController *)arg1 ;
@end

