/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _SFKeySpecifier;


@protocol _SFEncryptionOperation <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy,readonly) _SFKeySpecifier * encryptionKeySpecifier; 
@required
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
-(_SFKeySpecifier *)encryptionKeySpecifier;

@end

