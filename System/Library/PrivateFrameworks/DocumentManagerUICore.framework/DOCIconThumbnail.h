/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <DocumentManagerUICore/DOCBaseThumbnail.h>

@class NSString;

@interface DOCIconThumbnail : DOCBaseThumbnail {

	BOOL _folded;
	NSString* _contentType;

}

@property (nonatomic,readonly) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) BOOL folded;                           //@synthesize folded=_folded - In the implementation block
-(NSString *)contentType;
-(BOOL)folded;
-(id)initWithCache:(id)arg1 contentType:(id)arg2 size:(CGSize)arg3 scale:(double)arg4 fallback:(id)arg5 style:(unsigned long long)arg6 folded:(BOOL)arg7 qos:(unsigned)arg8 ;
-(id)createOperationWithSize:(CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3 ;
-(void)setFolded:(BOOL)arg1 ;
@end
