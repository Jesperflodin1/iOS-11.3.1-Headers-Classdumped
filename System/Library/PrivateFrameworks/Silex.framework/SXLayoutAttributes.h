/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SXColumnLayout, NSString;

@interface SXLayoutAttributes : NSObject <NSCopying> {

	SXColumnLayout* _columnLayout;
	NSString* _contentSizeCategory;
	UIEdgeInsets _safeAreaInsets;

}

@property (nonatomic,readonly) SXColumnLayout * columnLayout;               //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,readonly) NSString * contentSizeCategory;              //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                   //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(NSString *)contentSizeCategory;
-(SXColumnLayout *)columnLayout;
-(id)initWithColumnLayout:(id)arg1 contentSizeCategory:(id)arg2 ;
@end

