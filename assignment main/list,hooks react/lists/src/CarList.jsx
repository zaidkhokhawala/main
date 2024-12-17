import React from 'react';

function CarList() {
    
    const kb = ['Toyota', 'Honda', 'Ford', 'BMW', 'Tesla'];

    return (
        <div>
            <h1>Car List</h1>
            <ul>
                {kb.map((car, index) => (
                    <li key={index}>{car}</li>  
                ))}
            </ul>
        </div>
    );
}

export default CarList;
