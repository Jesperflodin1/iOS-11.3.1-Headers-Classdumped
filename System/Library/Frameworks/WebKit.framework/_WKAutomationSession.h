/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString, _WKAutomationSessionConfiguration;

@interface _WKAutomationSession : NSObject <WKObject> {

	ObjectStorage<WebKit::WebAutomationSession> _session;
	RetainPtr<_WKAutomationSessionConfiguration>* _configuration;
	WeakObjCPtr<id<_WKAutomationSessionDelegate> > _delegate;

}

@property (nonatomic,copy) NSString * sessionIdentifier; 
@property (nonatomic,copy,readonly) _WKAutomationSessionConfiguration * configuration; 
@property (assign,nonatomic,__weak) id<_WKAutomationSessionDelegate> delegate; 
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (getter=isSimulatingUserInteraction,nonatomic,readonly) BOOL simulatingUserInteraction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(id)init;
-(id<_WKAutomationSessionDelegate>)delegate;
-(void)setDelegate:(id<_WKAutomationSessionDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)sessionIdentifier;
-(id)initWithConfiguration:(id)arg1 ;
-(_WKAutomationSessionConfiguration *)configuration;
-(Object*)_apiObject;
-(BOOL)isSimulatingUserInteraction;
-(BOOL)isPaired;
@end
