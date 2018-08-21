/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKBrowsingContextGroup : NSObject <WKObject> {

	ObjectStorage<WebKit::WebPageGroup> _pageGroup;

}

@property (readonly) OpaqueWKPageGroupRef _pageGroupRef; 
@property (assign) BOOL allowsJavaScript; 
@property (assign) BOOL allowsPlugIns; 
@property (assign) BOOL privateBrowsingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(Object*)_apiObject;
-(BOOL)allowsJavaScript;
-(void)setAllowsJavaScript:(BOOL)arg1 ;
-(BOOL)allowsJavaScriptMarkup;
-(void)setAllowsJavaScriptMarkup:(BOOL)arg1 ;
-(BOOL)allowsPlugIns;
-(void)setAllowsPlugIns:(BOOL)arg1 ;
-(BOOL)privateBrowsingEnabled;
-(void)setPrivateBrowsingEnabled:(BOOL)arg1 ;
-(void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 mainFrameOnly:(BOOL)arg5 ;
-(void)removeAllUserStyleSheets;
-(void)addUserScript:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(BOOL)arg6 ;
-(OpaqueWKPageGroupRef)_pageGroupRef;
-(void)removeAllUserScripts;
@end

