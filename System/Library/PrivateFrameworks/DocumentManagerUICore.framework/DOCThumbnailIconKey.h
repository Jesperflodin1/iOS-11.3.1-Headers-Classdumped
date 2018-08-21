/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DOCThumbnailIconKey : NSObject <NSCopying> {

	BOOL _folded;
	NSString* _type;

}

@property (nonatomic,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL folded;                  //@synthesize folded=_folded - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)folded;
-(id)initWithType:(id)arg1 folded:(BOOL)arg2 ;
@end
