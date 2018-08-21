/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/iAd.framework/PlugIns/iAdWebProcessBundle.bundle/iAdWebProcessBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAdWebProcessBundle/iAdWebProcessBundle-Structs.h>
#import <iAdWebProcessBundle/ADWebProcessMRAIDJSODelegate.h>
#import <iAdWebProcessBundle/ADWebProcessVideoAdJSODelegate.h>
#import <iAdWebProcessBundle/WKWebProcessPlugInLoadDelegate.h>
#import <iAdWebProcessBundle/ADWebProcessProxy.h>

@protocol ADWebProcessDelegate;
@class JSContext, ADWebProcessMRAIDJSO, ADWebProcessVideoAdJSO, NSString;

@interface ADWebProcessPlugInLoadDelegate : NSObject <ADWebProcessMRAIDJSODelegate, ADWebProcessVideoAdJSODelegate, WKWebProcessPlugInLoadDelegate, ADWebProcessProxy> {

	id<ADWebProcessDelegate> _webProcessDelegate;
	JSContext* _currentJSContext;
	ADWebProcessMRAIDJSO* _webProcessMRAIDJSO;
	ADWebProcessVideoAdJSO* _webProcessVideoAdJSO;
	NSString* _advertisingIdentifier;
	NSString* _maximumRequestCount;

}

@property (nonatomic,retain) JSContext * currentJSContext;                               //@synthesize currentJSContext=_currentJSContext - In the implementation block
@property (nonatomic,retain) ADWebProcessMRAIDJSO * webProcessMRAIDJSO;                  //@synthesize webProcessMRAIDJSO=_webProcessMRAIDJSO - In the implementation block
@property (nonatomic,retain) ADWebProcessVideoAdJSO * webProcessVideoAdJSO;              //@synthesize webProcessVideoAdJSO=_webProcessVideoAdJSO - In the implementation block
@property (nonatomic,copy) NSString * advertisingIdentifier;                             //@synthesize advertisingIdentifier=_advertisingIdentifier - In the implementation block
@property (nonatomic,copy) NSString * maximumRequestCount;                               //@synthesize maximumRequestCount=_maximumRequestCount - In the implementation block
@property (nonatomic,retain) id<ADWebProcessDelegate> webProcessDelegate;                //@synthesize webProcessDelegate=_webProcessDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webProcessVideoAdJSOPlayStarted:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSOAudioMuted:(float)arg1 ;
-(JSContext *)currentJSContext;
-(void)webProcessVideoAdJSOPlayResumed:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSOPlayProgressed:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSOPlayPaused:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSOPlayCompletedWithVolume:(float)arg1 ;
-(void)webProcessVideoAdJSOVolumeChanged:(float)arg1 playTime:(float)arg2 ;
-(void)webProcessVideoAdJSOAudioUnmuted:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSOViewabilityChanged:(BOOL)arg1 playTime:(float)arg2 volume:(float)arg3 ;
-(void)webProcessVideoAdJSOMoreInfoTapped:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSOVideoTapped:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSOSkipAdTapped:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSOFullScreenTapped:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSOExitFullScreenTapped:(float)arg1 volume:(float)arg2 ;
-(void)_setIdentifiersForRequestsFromUserAgent:(id)arg1 ;
-(void)setCurrentJSContext:(JSContext *)arg1 ;
-(void)setWebProcessMRAIDJSO:(ADWebProcessMRAIDJSO *)arg1 ;
-(ADWebProcessMRAIDJSO *)webProcessMRAIDJSO;
-(void)setWebProcessVideoAdJSO:(ADWebProcessVideoAdJSO *)arg1 ;
-(ADWebProcessVideoAdJSO *)webProcessVideoAdJSO;
-(void)setExpandedSize:(id)arg1 ;
-(id<ADWebProcessDelegate>)webProcessDelegate;
-(void)setWebProcessDelegate:(id<ADWebProcessDelegate>)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3 ;
-(NSString *)advertisingIdentifier;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2 ;
-(id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5 ;
-(NSString *)maximumRequestCount;
-(void)setMaximumRequestCount:(NSString *)arg1 ;
-(void)webProcessMRAIDJSODidCallClose;
-(void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumSize:(CGSize)arg2 ;
-(void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)arg1 ;
-(void)webProcessMRAIDJSODidCallOpen:(id)arg1 ;
-(void)webProcessVideoAdJSOCreativeViewLoaded;
-(void)creativeStateDidChange:(long long)arg1 ;
-(void)resetVideoTagPlaytime;
-(void)creativeVisibilityDidChange:(BOOL)arg1 ;
-(void)actionDidFailWithErrorDescription:(id)arg1 ;
-(void)setAdvertisingIdentifier:(NSString *)arg1 ;
@end

