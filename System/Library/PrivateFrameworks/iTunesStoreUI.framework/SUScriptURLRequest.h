/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSMutableURLRequestProperties, NSNumber, NSString;

@interface SUScriptURLRequest : SUScriptObject {

	SSMutableURLRequestProperties* _requestProperties;

}

@property (copy) NSNumber * timeoutInterval; 
@property (copy) NSString * URLBagKey; 
@property (copy) id URLs; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSNumber *)timeoutInterval;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(id)attributeKeys;
-(id)init;
-(void)dealloc;
-(id)URLs;
-(void)setURLs:(id)arg1 ;
-(id)initWithNativeRequestProperties:(id)arg1 ;
-(id)copyNativeRequestProperties;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setURLBagKey:(NSString *)arg1 ;
-(NSString *)URLBagKey;
@end

