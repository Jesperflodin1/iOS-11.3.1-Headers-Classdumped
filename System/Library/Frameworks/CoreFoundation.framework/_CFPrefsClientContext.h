/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface _CFPrefsClientContext : NSObject {

	A@ _cfprefsd;
	CFDictionaryRef _readPermissionsCache;
	CFDictionaryRef _writePermissionsCache;
	CFDictionaryRef _suiteCache;
	CFArrayRef _ownedSources;
	NSObject*<OS_xpc_object> _entitlements;
	CFBooleanRef _sandboxed;
	os_unfair_lock_s _lock;
	unsigned long long _token;
	char _isPlatformBinary;

}
@end

