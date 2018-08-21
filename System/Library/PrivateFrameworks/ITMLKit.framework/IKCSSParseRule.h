/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSParseObject.h>

@class NSArray, IKCSSParseBlock;

@interface IKCSSParseRule : IKCSSParseObject {

	NSArray* _prelude;
	IKCSSParseBlock* _block;
	NSRange __endRange;

}

@property (assign,setter=_setEndRange:,nonatomic) NSRange _endRange;              //@synthesize _endRange=__endRange - In the implementation block
@property (nonatomic,retain) NSArray * prelude;                                   //@synthesize prelude=_prelude - In the implementation block
@property (nonatomic,retain) IKCSSParseBlock * block;                             //@synthesize block=_block - In the implementation block
-(id)init;
-(id)description;
-(NSRange)range;
-(IKCSSParseBlock *)block;
-(void)setBlock:(IKCSSParseBlock *)arg1 ;
-(NSArray *)prelude;
-(NSRange)_endRange;
-(void)setPrelude:(NSArray *)arg1 ;
-(void)_setEndRange:(NSRange)arg1 ;
@end

