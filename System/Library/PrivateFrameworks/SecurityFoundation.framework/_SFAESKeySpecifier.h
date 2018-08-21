/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFSymmetricKeySpecifier.h>

@interface _SFAESKeySpecifier : _SFSymmetricKeySpecifier {

	id _aesKeySpecifierInternal;

}

@property (nonatomic,readonly) long long blockSize; 
@property (assign,nonatomic) long long bitSize; 
+(BOOL)supportsSecureCoding;
+(Class)keyClass;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)blockSize;
-(long long)bitSize;
-(long long)keyLengthInBytes;
-(void)setBitSize:(long long)arg1 ;
-(id)initWithBitSize:(long long)arg1 ;
@end

