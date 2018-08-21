/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURLRequest, WKWebView, NSArray, NSString;

@interface _WKDownload : NSObject <WKObject> {

	ObjectStorage<WebKit::DownloadProxy> _download;

}

@property (nonatomic,readonly) NSURLRequest * request; 
@property (nonatomic,__weak,readonly) WKWebView * originatingWebView; 
@property (nonatomic,copy,readonly) NSArray * redirectChain; 
@property (nonatomic,readonly) BOOL wasUserInitiated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)cancel;
-(void)dealloc;
-(NSURLRequest *)request;
-(Object*)_apiObject;
-(NSArray *)redirectChain;
-(WKWebView *)originatingWebView;
-(BOOL)wasUserInitiated;
@end

