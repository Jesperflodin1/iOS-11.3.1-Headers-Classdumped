/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactChangesObserver.h>

@class NSString, CNContact, CNContactStore, CNContactProperty;

@interface CNFavoritesEntry : NSObject <CNContactChangesObserver> {

	NSString* _name;
	BOOL _dirty;
	BOOL _autoUpdating;
	int _abUid;
	int _abIdentifier;
	NSString* _actionType;
	NSString* _bundleIdentifier;
	long long _type;
	CNContact* _contact;
	NSString* _label;
	NSString* _value;
	NSString* _labeledValueIdentifier;
	NSString* _propertyKey;
	CNContactStore* _store;
	NSString* _abDatabaseUUID;
	NSString* _originalName;

}

@property (assign,nonatomic) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSString * label;                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * value;                                   //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * labeledValueIdentifier;                  //@synthesize labeledValueIdentifier=_labeledValueIdentifier - In the implementation block
@property (nonatomic,retain) NSString * propertyKey;                             //@synthesize propertyKey=_propertyKey - In the implementation block
@property (nonatomic,retain) CNContactStore * store;                             //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSString * abDatabaseUUID;                          //@synthesize abDatabaseUUID=_abDatabaseUUID - In the implementation block
@property (assign,nonatomic) BOOL dirty;                                         //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,retain) NSString * actionType;                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * originalName;                              //@synthesize originalName=_originalName - In the implementation block
@property (assign,nonatomic) int abUid;                                          //@synthesize abUid=_abUid - In the implementation block
@property (assign,nonatomic) int abIdentifier;                                   //@synthesize abIdentifier=_abIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL autoUpdating;                                //@synthesize autoUpdating=_autoUpdating - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CNContactProperty * contactProperty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)valueStringFromSocialProfile:(id)arg1 ;
+(id)valueStringFromInstantMessageAddress:(id)arg1 ;
+(id)socialProfileForFavoritesEntryValue:(id)arg1 ;
+(id)instantMessageAddressForFavoritesEntryValue:(id)arg1 ;
+(id)labeledValueValueForFavoritesEntryValue:(id)arg1 propertyKey:(id)arg2 ;
+(id)favoritesEntryValueForLabeledValueValue:(id)arg1 propertyKey:(id)arg2 ;
+(id)descriptorsForRequiredKeysForPropertyKey:(id)arg1 ;
+(id)createLabeledValueForFavoritesEntryValue:(id)arg1 label:(id)arg2 iOSLegacyIdentifier:(int)arg3 propertyKey:(id)arg4 ;
+(BOOL)favoritesEntryValueForLabeledValueValue:(id)arg1 propertyKey:(id)arg2 isEqualToValue:(id)arg3 ;
+(id)rematchEntrySnapshot:(id)arg1 withStore:(id)arg2 noMatchFound:(BOOL*)arg3 ;
+(void)_runLookupWithStore:(id)arg1 ;
+(id)contactFormatter;
+(id)sharedContactStore;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(NSString *)abDatabaseUUID;
-(id)_initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 entryType:(long long)arg4 actionType:(id)arg5 bundleIdentifier:(id)arg6 store:(id)arg7 ;
-(void)_convertFromEntryType:(long long)arg1 toActionType:(id*)arg2 bundleIdentifier:(id*)arg3 ;
-(int)_entryTypeForActionType:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)setPropertyKey:(NSString *)arg1 ;
-(void)setLabeledValueIdentifier:(NSString *)arg1 ;
-(void)setAbUid:(int)arg1 ;
-(void)setAbDatabaseUUID:(NSString *)arg1 ;
-(BOOL)autoUpdating;
-(void)_unqueueLookup;
-(void)_postEntryChanged;
-(void)setOriginalName:(NSString *)arg1 ;
-(int)abUid;
-(void)_queueLookup;
-(void)_lookupNotFound;
-(void)_lookupChanged:(id)arg1 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 store:(id)arg5 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5 store:(id)arg6 ;
-(void)recheckContactStore;
-(id)initWithDictionaryRepresentation:(id)arg1 store:(id)arg2 autoUpdating:(BOOL)arg3 ;
-(void)dictionaryRepresentation:(id*)arg1 isDirty:(BOOL*)arg2 ;
-(CNContactProperty *)contactProperty;
-(void)contactDidChange:(id)arg1 ;
-(CNContactStore *)store;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)labeledValueIdentifier;
-(CNContact *)contact;
-(int)abIdentifier;
-(void)setAbIdentifier:(int)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)propertyKey;
-(NSString *)originalName;
-(void)setStore:(CNContactStore *)arg1 ;
@end

