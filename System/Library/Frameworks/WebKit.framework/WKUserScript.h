/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _WKUserContentWorld, NSString;

@interface WKUserScript : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::UserScript> _userScript;

}

@property (nonatomic,readonly) _WKUserContentWorld * _userContentWorld; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,readonly) long long injectionTime; 
@property (getter=isForMainFrameOnly,nonatomic,readonly) BOOL forMainFrameOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)source;
-(Object*)_apiObject;
-(_WKUserContentWorld *)_userContentWorld;
-(BOOL)isForMainFrameOnly;
-(long long)injectionTime;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 associatedURL:(id)arg6 userContentWorld:(id)arg7 ;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 userContentWorld:(id)arg6 ;
-(id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 ;
@end
