/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Accounts/Accounts-Structs.h>
@interface ACDPropertyEncryption : NSObject
+(SecKeyRef)accountPropertyCryptoKeyCreatingIfNecessary:(BOOL)arg1 ;
+(id)decryptProperty:(id)arg1 ;
+(id)_decryptableDataForStoredProperty:(id)arg1 ;
+(id)encryptProperty:(id)arg1 ;
@end
