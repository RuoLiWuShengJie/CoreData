//
//  User+CoreDataProperties.h
//  CoreData
//
//  Created by 吴胜杰 on 16/4/16.
//  Copyright © 2016年 wsj. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "User.h"

NS_ASSUME_NONNULL_BEGIN

@interface User (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) User *relationship;

@end

NS_ASSUME_NONNULL_END
