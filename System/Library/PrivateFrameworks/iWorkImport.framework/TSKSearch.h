/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSKSearch : NSObject {

	BOOL _isComplete;
	NSString* _string;
	unsigned long long _options;
	/*^block*/id _hitBlock;

}

@property (nonatomic,copy) NSString * string;                         //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id hitBlock;                               //@synthesize hitBlock=_hitBlock - In the implementation block
@property (assign,nonatomic) BOOL isComplete;                         //@synthesize isComplete=_isComplete - In the implementation block
-(void)dealloc;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(BOOL)isComplete;
-(void)setHitBlock:(id)arg1 ;
-(void)setIsComplete:(BOOL)arg1 ;
-(id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(/*^block*/id)arg3 ;
-(id)hitBlock;
@end

