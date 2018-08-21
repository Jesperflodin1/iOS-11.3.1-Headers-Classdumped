/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <MobileBackup/MBDigest.h>

@interface MBDigestSHA256 : MBDigest {

	CC_SHA256state_st _context;

}
-(id)init;
-(void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)final;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
@end

