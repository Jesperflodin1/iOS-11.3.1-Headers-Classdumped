/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNDDonationPreferences.h>

@class NSString;

@interface CNDInMemoryDonationPreferences : NSObject <CNDDonationPreferences> {

	BOOL _donationsEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDonationsEnabled,nonatomic) BOOL donationsEnabled;              //@synthesize donationsEnabled=_donationsEnabled - In the implementation block
-(void)setDonationsEnabled:(BOOL)arg1 ;
-(BOOL)isDonationsEnabled;
@end

