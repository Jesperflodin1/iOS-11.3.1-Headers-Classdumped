/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NetPreferences : NSObject {

	NSString* _buildVersion;
	NSString* _productVersion;
	NSString* _UUID;
	BOOL _serviceDebugging;
	BOOL _isNetworkReachable;
	NSString* _requestCountryCode;
	NSString* _requestLanguageCode;
	NSString* _acceptLanguageCode;

}

@property (retain) NSString * requestCountryCode; 
@property (retain) NSString * requestLanguageCode; 
@property (retain) NSString * acceptLanguageCode; 
@property (assign,getter=isNetworkReachable,nonatomic) BOOL networkReachable; 
+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(id)_cacheDirectoryPath;
-(id)init;
-(id)UUID;
-(void)resetLocale;
-(BOOL)isNetworkReachable;
-(id)defaultBacksideLogoURL;
-(id)backsideLogoURL;
-(id)stocksYQLBaseURL;
-(id)signedRequestForURL:(id)arg1 parameters:(id)arg2 ;
-(BOOL)serviceDebugging;
-(void)setRequestCountryCode:(NSString *)arg1 ;
-(void)setRequestLanguageCode:(NSString *)arg1 ;
-(void)setAcceptLanguageCode:(NSString *)arg1 ;
-(NSString *)requestCountryCode;
-(NSString *)requestLanguageCode;
-(id)stocksLanguageCodeForLanguage:(id)arg1 ;
-(NSString *)acceptLanguageCode;
-(id)_stocksUserAgent;
-(id)stocksCountryCode;
-(id)_stocksAcceptLanguage;
-(id)stocksLanguageCode;
-(void)addStocksHeadersToPostRequest:(id)arg1 ;
-(id)financeRequestAttributes;
-(id)_urlStringWithHost:(id)arg1 ;
-(id)fullQuoteURLOverrideForStock:(id)arg1 ;
-(id)logoButtonImage;
-(id)logoBacksideImage;
-(id)serviceDebuggingPath;
-(void)setNetworkReachable:(BOOL)arg1 ;
@end
