import React from 'react'
import { BrowserRouter, Route, Routes } from 'react-router-dom'
import Home from './Home'
import Contact from './Contact'
import Properties from './Properties'
import Property_details from './Property_details'

function Main() {
    return (
        <div>


            <BrowserRouter>
                <Routes>
                    <Route path='/' element={<><Home /></>}></Route>
                    <Route path='/Contact' element={<><Contact /></>}></Route>
                    <Route path='/Properties' element={<><Properties/></>}></Route>
                    <Route path='/Property_details' element={<><Property_details /></>}></Route>

                </Routes>
            </BrowserRouter>




        </div>
    )
}

export default Main