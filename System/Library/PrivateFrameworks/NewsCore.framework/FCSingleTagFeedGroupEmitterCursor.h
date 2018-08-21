/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFeedGroupEmittingCursor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCFeedRange;

@interface FCSingleTagFeedGroupEmitterCursor : FCFeedGroupEmittingCursor <NSCopying> {

	FCFeedRange* _freeFeedRange;
	FCFeedRange* _paidFeedRange;

}

@property (nonatomic,copy) FCFeedRange * freeFeedRange;              //@synthesize freeFeedRange=_freeFeedRange - In the implementation block
@property (nonatomic,copy) FCFeedRange * paidFeedRange;              //@synthesize paidFeedRange=_paidFeedRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCFeedRange *)freeFeedRange;
-(FCFeedRange *)paidFeedRange;
-(void)setFreeFeedRange:(FCFeedRange *)arg1 ;
-(void)setPaidFeedRange:(FCFeedRange *)arg1 ;
@end

