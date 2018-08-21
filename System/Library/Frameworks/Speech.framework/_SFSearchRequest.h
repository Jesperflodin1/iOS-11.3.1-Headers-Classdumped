/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _SFSearchRequest : NSObject {

	long long _searchTypes;
	NSDictionary* _headerFields;
	NSDictionary* _queryParameters;

}

@property (assign,nonatomic) long long searchTypes;                     //@synthesize searchTypes=_searchTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * headerFields;                 //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,copy) NSDictionary * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
-(NSDictionary *)headerFields;
-(NSDictionary *)queryParameters;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(long long)searchTypes;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(void)setSearchTypes:(long long)arg1 ;
@end
