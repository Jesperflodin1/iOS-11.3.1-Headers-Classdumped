/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponentScrollPosition.h>

@interface SXTextComponentScrollPosition : SXComponentScrollPosition {

	long long _characterIndex;
	double _relativeTextOffset;

}

@property (assign,nonatomic) long long characterIndex;               //@synthesize characterIndex=_characterIndex - In the implementation block
@property (assign,nonatomic) double relativeTextOffset;              //@synthesize relativeTextOffset=_relativeTextOffset - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)characterIndex;
-(double)relativeTextOffset;
-(void)setCharacterIndex:(long long)arg1 ;
-(void)setRelativeTextOffset:(double)arg1 ;
@end

