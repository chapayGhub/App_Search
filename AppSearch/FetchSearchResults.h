//
//  FetchSearchResults.h
//  AppSearch
//
//  Created by JRamos on 4/28/13.
//  Copyright (c) 2013 JRamos. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FetchSearchResults : NSObject
@property (strong, nonatomic) NSMutableArray *arrayOfTitles;
@property (strong, nonatomic) NSMutableArray *arrayOfImages;
@property (strong, nonatomic) NSMutableArray *arrayOfPrices;
@property (strong, nonatomic) NSMutableArray *arrayOfRatings;
@property (strong, nonatomic) NSMutableArray *arrayOfAuthors;
@property (strong, nonatomic) NSMutableArray *arrayOfRatingsInt;
@property (weak, nonatomic) NSString * passURL;


+ (id)sharedInstance;
- (void)runQuery;

@end