/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray, NSString;

@interface SKUILocalizedStringDictionary : NSObject {

	NSArray* _bundles;
	NSMutableArray* _stringTables;
	NSString* _localeName;

}

@property (nonatomic,readonly) NSString * localeName;              //@synthesize localeName=_localeName - In the implementation block
-(id)localizedStringForKey:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 inTable:(id)arg2 ;
-(id)_stringTableForBundle:(id)arg1 tableName:(id)arg2 ;
-(id)initWithLocaleName:(id)arg1 bundles:(id)arg2 ;
-(NSString *)localeName;
@end

